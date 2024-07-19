def fizz_buzz(n: int):
    digit_sequences = ['3', '5', '15']
    count = sum(1 for i in range(1, n + 1) if any(seq in str(i) or (i % int(seq) == 0 and int(seq) != 0) for seq in digit_sequences))
    return count