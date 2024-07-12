```python
def get_closest_elements(input_list):
    if len(input_list) < 2:
        return "List should have at least two elements"
    input_list.sort()
    closest_diff = float('inf')
    closest_pair = ()
    for i in range(len(input_list) - 1):
        diff = input_list[i+1] - input_list[i]
        if diff < closest_diff:
            closest_diff = diff
            closest_pair = (input_list[i], input_list[i+1])
    return closest_pair

def check(func):
    result = func([int(x) for x in input("Enter elements separated by space: ").split()])
    return result

print(check(get_closest_elements))