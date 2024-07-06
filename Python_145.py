def order_by_points(athletes):
    return sorted((athlete, sum(int(digit) for digit in str(abs(athlete['points'])))) for athlete in athletes, key=lambda x: x[1], reverse=True)