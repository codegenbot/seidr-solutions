def check(closest_integer):
    if closest_integer in ["Jan", "Mar", "May", "Jul", "Aug", "Oct", "Dec"]:
        return "Leap year"
    elif closest_integer in ["Apr", "Jun", "Sep", "Nov"]:
        return "Not leap year, but has 30 days"
    else:
        return "Not a leap year"