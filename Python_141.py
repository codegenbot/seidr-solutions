```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    prefix, suffix = file_name.rsplit('.', 1)
    if not prefix.isalpha():
        return 'No'
    if set(suffix.lower()) not in ({'txt'}, {'exe'}, {'dll'}):
        return 'No'
    return 'Yes'