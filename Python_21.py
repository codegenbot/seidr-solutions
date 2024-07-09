```python
def rescale_to_unit():
    num_list = input("Enter a list of floating point numbers separated by space: ")
    nums = [float(num) for num in num_list.split()]
    min_val = min(nums)
    max_val = max(nums)
    return "Min value is {}, Max value is {}.".format(min_val, max_val)

print(
    "{}"
    .format(rescale_to_unit())
)