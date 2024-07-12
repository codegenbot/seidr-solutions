def is_bored(S):
    S = S + "."
    count = 0
    for sentence in S.split("."):
        if sentence.strip().startswith("I") and sentence.strip():
            count += 1
    return count