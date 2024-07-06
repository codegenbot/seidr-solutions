def calculate_sum_and_average(input_dict):
    total = sum(input_dict.values())
    count = len(input_dict)
    average = total / count
    return {"sum": total, "average": average}