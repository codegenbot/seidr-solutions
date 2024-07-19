def fizz_buzz(n: int):
    digit_sequences = ['117', '137', '177', '777', '711', '171', '1177', '1777', '7777']
    count = sum(1 for i in range(1, n+1) if any(digit_sequence in str(i) for digit_sequence in digit_sequences))
    return count