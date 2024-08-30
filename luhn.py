Here is the solution:

def luhn(vector):
    return sum(int(d) * 2 if i % 2 else int(d) for i, d in enumerate(reversed(vector))) % 10