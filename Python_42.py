def increment_list_elements(sample_list):
    return [x + 1 for x in sample_list]

def check(func):
    sample_list = [1, 2, 3]
    result = func(sample_list)
    assert result == [2, 3, 4]
    print("Function call is correct")

check(increment_list_elements)