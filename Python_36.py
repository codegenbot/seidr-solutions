def fizz_buzz(n: int):
    digit_sequences = ['3', '7', '17', '77', '13', '31', '37', '73', '77']
    count = sum(1 for i in range(1, n + 1) if any(seq in str(i) for seq in digit_sequences))
    return count