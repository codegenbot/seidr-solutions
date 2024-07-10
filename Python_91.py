def is_bored(S):
    S = S + "."
    count = 0
    for i in range(len(S)):
        if S[i : i + 2] == "I ":
            count += 1
    return count