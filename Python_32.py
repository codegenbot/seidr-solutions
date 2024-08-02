def find_zero(xs: list):
    a, *_, b = xs
    return -b / a

# Test cases
if __name__ == "__main__":
    xs = list(map(int, input().split()))
    print(round(find_zero(xs), 2))