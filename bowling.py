def bowling_score(frames):
    score = 0
    frame_count = 1
    for char in frames:
        if char.isdigit():
            strike = False
            spare = False
            if len(char) == 2 and char[1] == "/":
                strike = True
                score += 10
            elif char != "X" and char != "-":
                spare = True
                score += int(char)
        else:
            if char == "X":
                score += 10
                strike = True
            elif char == "-":
                continue
        if frame_count > 1 and not strike:
            score += sum(map(int, frames[frame_count - 2 : frame_count]))
        frame_count += 1
    return score