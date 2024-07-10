def order_by_points():
    nums = list(map(int, input("Enter the numbers separated by space: ").split()))
    return sorted([num, sum(map(int, str(abs(num))))) for num in nums])