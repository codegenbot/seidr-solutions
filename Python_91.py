def is_bored(S):
    return sum(
        1
        for s in S.split(". ") + S.split("? ") + S.split("! ")
        if s.strip().lower().startswith("i")
    )


if __name__ == "__main__":
    S = input("Enter text (type 'q' to quit): ")
    while S != "q":
        print(is_bored(S))
        S = input("Enter text (type 'q' to quit): ")