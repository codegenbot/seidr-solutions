```
def sum_of_odd_numbers_in_range():
    start = int(input("Enter the start of the range: "))
    end = int(input("Enter the end of the range: "))

    total_sum = 0
    for num in range(start, end + 1):
        if num % 2 != 0:
            total_sum += num

    return total_sum