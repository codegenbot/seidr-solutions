def bowling_score(bowls):
    score = 0
    frame = 1
    bowl_idx = 0
    for _ in range(10):
        if bowls[bowl_idx] == "X":
            score += 10 + get_frame_score(bowls, bowl_idx + 1, 2)
            bowl_idx += 1
        elif bowls[bowl_idx + 1] == "/":
            score += 10 + get_frame_score(bowls, bowl_idx + 2, 1)
            bowl_idx += 2
        else:
            score += int(bowls[bowl_idx]) + int(bowls[bowl_idx + 1])
            bowl_idx += 2
        frame += 1
    return score


def get_frame_score(bowls, start_idx, num_bowls):
    frame_score = 0
    for _ in range(num_bowls):
        if bowls[start_idx] == "X":
            frame_score += 10
        elif bowls[start_idx] == "/":
            frame_score += 10 - int(bowls[start_idx - 1])
        else:
            frame_score += int(bowls[start_idx])
        start_idx += 1
    return frame_score


bowls = input()
print(bowling_score(bowls))