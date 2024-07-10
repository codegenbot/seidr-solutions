def simplified fractions(numerator_list, denominator_list):
    result = []
    for x in numerator_list:
        for y in denominator_list:
            if float(x)/x == float(y)/y and x!=0 and y!=0:
                if [int(x), int(y)] not in result and [int(y), int(x)] not in result:
                    result.append([int(x), int(y)])
    return result