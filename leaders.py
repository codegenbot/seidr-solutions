def get_leaders(my_list):
    leaders = []
    for i in range(len(my_list)):
        if my_list[i] >= my_list[i+1:]:
            leaders.append(my_list[i])
    return leaders