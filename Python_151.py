def check(expected_result, actual_result):
    if actual_result == expected_result:
        print("Correct")
    else:
        print("Incorrect")

input_list = [1, 2, 3]
expected_result = sum(i**2 for i in input_list if isinstance(i, int) and i % 2 != 0)
actual_result = sum(i**2 for i in input_list if isinstance(i, int) and i > 0)
check(expected_result, actual_result)