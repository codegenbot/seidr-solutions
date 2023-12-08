def gcd(a, b):
    if a < 0 or b < 0:
        raise ValueError("Both inputs must be positive")
    return max(a, b) // min(a, b)