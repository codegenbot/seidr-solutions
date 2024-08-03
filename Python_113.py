def odd_count(lst):
    return [
        (
            f"the number of odd elements {str(i+1)}n the str{i+1}ng {i+1} of the {i+1}nput."
            if len(lst) > i
            else f"the number of odd elements {len([int(digit) for digit in lst[i] if int(digit)%2 != 0])}n the str{lst[i]}ng of the input."
        )
        for i in range(len(lst))
    ]