def increment_list(l):
    return [x + 1 for x in l]

def check(func):
    sample_input = [1, 2, 3]
    expected_output = [2, 3, 4]
    if func(sample_input) == expected_output:
        print("Function output matches expected output.")
    else:
        print("Function output does not match expected output.")

check(increment_list)