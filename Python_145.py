def order_by_points(nums):
    return sorted(enumerate(nums), key=lambda x: (sum(str(abs(x[1])).isdigit()), -x[0]))