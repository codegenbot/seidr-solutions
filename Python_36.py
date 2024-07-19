def fizz_buzz(n: int):
    count = 0
    for i in range(1, n+1):
        for digit_sequence in ['117', '137', '177', '777', '711', '171', '1177', '1777', '7777']:
            if digit_sequence in str(i):
                count += 1
                break
    return count