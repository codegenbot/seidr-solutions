def truncate_number(number: float) -> float:
    return int(str(number).split(".")[0] + "." + str(number).split(".")[1][:15])