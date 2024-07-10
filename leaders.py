Here is the solution:

def leaders(vector):
    leaders_list = [vector[-1]]
    for i in range(len(vector) - 2, -1, -1):
        if vector[i] >= vector[i+1]:
            leaders_list.append(vector[i])
    return list(reversed(leaders_list))