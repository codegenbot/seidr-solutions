Here is the solution:

def luhn(vector):
    return sum(2 * int(digit) if i % 2 != 0 else int(digit) for i, digit in enumerate(map(str, vector))) - sum(int(i) // 10 + int(i) % 10 for i in (str(2 * int(digit)) if i % 2 != 0 else str(int(digit)) for i, digit in enumerate(map(str, vector)))) if max(map(int, vector)) > 4 else sum(map(int, vector))