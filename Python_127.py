interval1_start = int(input("Enter the start of interval 1: "))
interval1_end = int(input("Enter the end of interval 1: "))

interval2_start = int(input("Enter the start of interval 2: "))
interval2_end = int(input("Enter the end of interval 2: "))

interval1 = (interval1_start, interval1_end)
interval2 = (interval2_start, interval2_end)

print(intersection(interval1, interval2))