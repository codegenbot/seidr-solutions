def check(expected_output):
    input_list = [1, 2, 3]
    print(double_the_difference(input_list) == expected_output)

def double_the_difference(lst):
    if len(lst) < 2:
        return None

    max_val = max(i for i in lst if isinstance(i, int))
    min_val = min(i for i in lst if isinstance(i, int))

    return (max_val - min_val) * 2

check(14)