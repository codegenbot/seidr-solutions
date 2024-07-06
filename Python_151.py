```
def check(lst):
    odd_sum = sum(i for i in lst if isinstance(i, int) and i % 2 != 0)
    result = double_the_difference(lst)
    assert result == odd_sum

def double_the_difference(lst):
    return (max(lst) + min(lst)) * (
        (sum(i**2 for i in lst if isinstance(i, int) and i > 0))
        / len([i for i in lst if isinstance(i, int) and i > 0])
        - abs(max(lst) - min(lst))
    )