def fizz_buzz(n: int):
    digit_sequences = ['3', '5', '33', '55', '153', '335', '515', '35']
    count = sum(1 for i in range(1, n + 1) if any(i % int(seq) == 0 for seq in digit_sequences))
    return count