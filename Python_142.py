def sum_squares(lst):
    total = 0
        for num in lst:
            if num % 2 == 0 and num % 3 != 0:
                total += num**2
            elif num % 4 == 0:
                if num % 6 == 0:
                    total += num**3
                else:
                    total += num**2
    return total