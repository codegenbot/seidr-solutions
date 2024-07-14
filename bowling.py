def bowling_score(frames):
    score = 0
    frame_count = 1
    for char in frames:
        if char == "X":
            score += 30
            frame_count -= 1
        elif char == "/":
            strike_score = 10 + get_next_two_points()
            score += strike_score
            frame_count -= 1
        else:
            point1, point2 = map(int, [char[0], char[1]])
            if frame_count == 1:
                score += point1 + point2
            elif frame_count < 10 and point1 + point2 >= 10:
                score += 10
                frame_count -= 1
            else:
                score += point1
        if frame_count == 0:
            break
    return score


def get_next_two_points():
    frames = list(bowling_score.next_frames())
    return [int(frames[0]), int(frames[1])]