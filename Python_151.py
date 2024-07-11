```
def double_the_difference(your_list_here):
    if len(your_list_here) < 2:
        return None
    diff = your_list_here[0] - your_list_here[-1]
    return diff * 2

def check():
    your_list_here = [1, -2, 3, 4, -5]
    result = double_the_difference(your_list_here)
    print(result)