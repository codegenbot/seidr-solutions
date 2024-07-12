```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    if file_name[0].lower() < 'a':
        return 'No'
    if not set(['txt', 'exe', 'dll']).issuperset(file_name.split('.')[1].lower()):
        return 'No'
    return 'Yes'