def find_closest(lst):
    closest = float("inf")
    target = int(input("Enter a number: "))
    for num in lst:
        if abs(num - target) < abs(closest - target):
            closest = num
    return closest