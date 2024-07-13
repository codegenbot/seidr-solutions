def odd_count(lst):
    return [
        f"the number of odd elements {len([int(d) for d in s if int(d) % 2])}n the str{str(s).replace('0', '0')[1:-1]}ng {str(s).replace('0', '0')[1:-1]} of the {str(s).replace('0', '0')[1:-1]}nput."
        for s in lst
    ]