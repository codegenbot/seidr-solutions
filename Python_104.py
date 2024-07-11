def unique_digits():
    x = int(input("Enter an integer: "))
    return sorted([i for i in str(x) if all(int(d) % 2 != 0 for d in str(i))])