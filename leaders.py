def leaders(input_list):
    return [i for i in reversed(input_list) if all(j <= i for j in input_list[input_list.index(i)+1:])]