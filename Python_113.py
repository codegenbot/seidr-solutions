def odd_count(lst):
    return [
        f"the number of odd elements {len(str(i)) - (str(i).count('0') + str(i).count('2') + str(i).count('4') + str(i).count('6') + str(i).count('8'))}n the str{i}ng {i} of the {i}nput."
        for i in lst[0]
    ]