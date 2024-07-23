def solve(input_string):
    score = 0
    i = 0
    frames = input_string.split()
    for frame in frames:
        if frame == "X":
            score += 10
            i += 1
        elif "/" in frame:
            parts = frame.split("/")
            if parts[0] and parts[1].isdigit():
                score += int(parts[0]) + int(parts[1])
            else:
                score += sum(int(x) for x in frame)
            i += 1
        else:
            score += sum(int(x) for x in frame)
            i += 1
    if i < len(frames):
        score += sum(int(x) for x in frames[i])
    print(score)

input_string = input("Enter the individual bowls: ")
solve(input_string)