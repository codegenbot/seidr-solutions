```
def file_name_check(file_name):
    if len([c for c in file_name if c.isdigit()]) > 3:
        return 'No'
    if file_name.count('.') != 1:
        return 'No'
    prefix, suffix = file_name.split('.')
    if not prefix[0].isalpha():
        return 'No'
    if not set(['txt', 'exe', 'dll']).issuperset(set([suffix])):
        return 'No'
    return 'Yes'