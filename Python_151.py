def double_the_difference(your_list):
    max_diff = max(your_list) - min(your_list)
    return 2 * max_diff

def check():
    your_list_here = [1, -2, 3, 4, -5]
    result = double_the_difference(your_list_here)
    print(result)

check()