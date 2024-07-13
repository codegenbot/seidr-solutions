```
def calculate_score(frames):
    score = 0
    frame_num = 1
    frames = frames.replace("/", "-").replace("X", "10-")

    while len(frames) > 0:
        if "-" in frames:
            parts = map(int, frames.split("-"))
            first, second = parts[0], parts[1]
            if frame_num < 10 and sum([int(x) for x in str(first)]) + int(second) > 10:
                score += 10
                frame_num += 1
            else:
                score += first + second
            frames = ""
        elif "X" in frames:
            score += 10
            frames = frames.replace("X", "")
            frame_num += 1
        else:
            score += int(frames[0])
            frames = frames[1:]

    return score


frames = input("Enter the frames string: ")
print(calculate_score(frames))