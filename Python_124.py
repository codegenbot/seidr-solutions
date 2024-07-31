def valid_date(date):
    from datetime import datetime

    try:
        dt = datetime.strptime(date, "%m-%d-%Y")
        return True
    except ValueError:
        return False