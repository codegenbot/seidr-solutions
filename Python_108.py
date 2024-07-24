def count_nums(arr):
    return sum(
        1
        for num in arr
        if sum(
            int(digit) if digit > "0" else -int(digit[1:]) for digit in str(abs(num))
        )
        > 0
    )