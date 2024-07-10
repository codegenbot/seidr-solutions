Here is the Python solution for the problem:

def leaders(input_list):
    leaders = [i for i in reversed(input_list) if all(i >= j for j in input_list[input_list.index(i)+1:])]
    return list(reversed(leaders))