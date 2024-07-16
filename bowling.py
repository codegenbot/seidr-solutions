def bowling(score):
    frames = [int(x) for x in score.replace("/", "")]
    return sum(
        [
            max(10 - i + 1, k) if i < 2 else max(k, 10 - i + 1)
            for i, k in enumerate(frames)
        ]
    )


if __name__ == "__main__":
    while True:
        try:
            score = input()
            print(bowling(score))
        except EOFError:
            break