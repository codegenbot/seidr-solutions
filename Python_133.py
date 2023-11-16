

def sum_squares(lst1):
    """You are given a list of numbers.
    You need to return the sum of squared numbers in the given list,
    round each element in the list to the upper int(Ceiling) first.
    Examples:
    For lst = [1,2,3] the output should be 14
    For lst = [1,4,9] the output should be 98
    For lst = [1,3,5,7] the output should be 84
    For lst = [1.4,4.2,0] the output should be 29
    For lst = [-2.4,1,1] the output should be 6
    sum = 0
    for i in lst1:
        sum += (int(i) ** 2)
    return sum


if __name__ == "__main__":
    lst1 = input("Enter the list of numbers: ")
    lst1 = lst1.split(',')
    print(sum_squares(lst1))
    

    """
