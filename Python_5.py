def calculate_average_and_std_dev(input_list: List[float]) -> (float, float):
    avg = sum(input_list) / len(input_list)
    variances = [(x - avg)**2 for x in input_list]
    std_dev = (sum(variances) / len(variances))**0.5
    return avg, std_dev