def solve(grades):
    averages = [sum(student) / len(student) for student in grades]
    medians = []
    for student in grades:
        median_values = sorted(student)
        if len(median_values) % 2 == 0:
            medians.append(' '.join(map(str, median_values[len(median_values)//2-1: len(median_values)//2+1])))
        else:
            medians.append(' '.join(map(str, [median_values[len(median_values)//2]])))
    return f"Average: {sum(averages) / len(averages)}, Median: {medians}"