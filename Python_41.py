

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.
    # TODO: Complete the following code given the task description and function signature.
    # You may add additional helper functions as needed.
    # You may not use any external libraries.
    # You may not use any built-in Python data structures other than lists.
    # You may not use any built-in Python functions other than len(), max(), min(), and sorted().
    # You may not use any built-in Python operators other than +, -, *, /, //, %, **, >, >=, <, <=, ==, !=, and in.
    # You may not use any built-in Python control flow statements other than if, for, and while.
    # You may not use any built-in Python iterators or generators.
    # You may not use any built-in Python data types other than int, float, bool, str, list, and tuple.
    # You may not use any built-in Python object methods.
    # You may not use any built-in Python object attributes.
    # You may not use any built-in Python object properties.
    # You may not use any built-in Python object functions.
    # You may not use any built-in Python object classes.
    # You may not use any built-in Python object constants.
    # You may not use any built-in Python object variables.
    # You may not use any built-in Python object types.
    # You may not use any built-in Python object values.
    # You may not use any built-in Python object names.
    # You may not use any built-in Python object identifiers.
    # You may not use any built-in Python object keywords.
    # You may not use any built-in Python object literals.
    # You may not use any built-in Python object expressions.
    # You may not use any built-in Python object statements.
    # You may not use any built-in Python object declarations.
    # You may not use any built-in Python object definitions.
    # You may not use any built-in Python object assignments.
    # You may not use any built-in Python object calls.
    # You may not use any built-in Python object instantiations.
    # You may not use any built-in Python object creations.
    # You may not use any built-in Python object initializations.
    # You may not use any built-in Python object initial values.
    # You may not use any built-in Python object initial states.
    # You may not use any built-in Python object initial conditions.
    # You may not use any built-in Python object initial configurations.
    # You may not use any built-in Python object initial setups.
    # You may not use any built-in Python object initial statuses.
    # You may not use any built-in Python object initial appearances.
    # You may not use any built-in Python object initial locations.
    # You may not use any built-in Python object initial positions.
    # You may not use any built-in Python object initial placements.
    # You may not use any built-in Python object initial arrangements.
    # You may not use any built-in Python object initial alignments.
    # You may not use any built-in Python object initial orientations.
    # You may not use any built-in Python object initial directions.
    # You may not use any built-in Python object initial orders.
    # You may not use any built-in Python object initial sequences.
    # You may not use any built-in Python object initial lists.
    # You may not use any built-in Python object initial tuples.
    # You may not use any built-in Python object initial sets.
    # You may not use any built-in Python object initial collections.
    # You may not use any built-in Python object initial groups.
    # You may not use any built-in Python object initial arrays.
    # You may not use any built-in Python object initial matrices.
    # You may not use any built-in Python object initial tables.
    # You may not use any built-in Python object initial grids.
    # You may not use any built-in Python object initial structures.
    # You may not use any built-in Python object initial formats.
    # You may not use any built-in Python object initial layouts.
    # You may not use any built-in Python object initial designs.
    # You may not use any built-in Python object initial appearances.
    # You may not use any built-in Python object initial looks.
    # You may not use any built-in Python object initial styles.
    # You may not use any built-in Python object initial themes.
    # You may not use any built-in Python object initial skins.
    # You may not use any built-in Python object initial templates.
    # You may not use any built-in Python object initial patterns.
    # You may not use any built-in Python object initial models.
    # You may not use any built-in Python object initial forms.
    # You may not use any built-in Python object initial shapes.
    # You may not use any built-in Python object initial figures.
    # You may not use any built-in Python object initial images.
    # You may not use any built-in Python object initial icons.
    # You may not use any built-in Python object initial symbols.
    # You may not use any built-in Python object initial signs.
    # You may not use any built-in Python object initial logos.
    # You may not use any built-in Python object initial emblems.
    # You may not use any built-in Python object initial badges.
    # You may not use any built-in Python object initial mascots.
    # You may not use any built-in Python object initial mascaras.
    # You may not use any built-in Python object initial masks.
    # You may not use any built-in Python object initial avatars.
    # You may not use any built-in Python object initial characters.
    # You may not use any built-in Python object initial sprites.
    # You may not use any built-in Python object initial objects.
    # You may not use any built-in Python object initial entities.
    # You may not use any built-in Python object initial things.
    # You may not use any built-in Python object initial items.
    # You may not use any built-in Python object initial elements.
    # You may not use any built-in Python object initial components.
    # You may not use any built-in Python object initial parts.
    # You may not use any built-in Python object initial members.
    # You may not use any built-in Python object initial nodes.
    # You may not use any built-in Python object initial vertices.
    # You may not use any built-in Python object initial points.
    # You may not use any built-in Python object initial locations.
    # You may not use any built-in Python object initial positions.
    # You may not use any built-in Python object initial coordinates.
    # You may not use any built-in Python object initial addresses.
    # You may not use any built-in Python object initial references.
    # You may not use any built-in Python object initial handles.
    # You may not use any built-in Python object initial pointers.
    # You may not use any built-in Python object initial links.
    # You may not use any built-in Python object initial connections.
    # You may not use any built-in Python object initial references.
    # You may not use any built-in Python object initial associations.
    # You may not use any built-in Python object initial relationships.
    # You may not use any built-in Python object initial bindings.
    # You may not use any built-in Python object initial dependencies.
    # You may not use any built-in Python object initial connections.
    # You may not use any built-in Python object initial references.
    # You may not use any built-in Python object initial associations.
    # You may not use any built-in Python object initial relationships.
    # You may not use any built-in Python object initial bindings.
    # You may not use any built-in Python object initial dependencies.
    # You may not use any built-in Python object initial connections.
    # You may not use any built-in Python object initial references.
    # You may

    This function outputs the number of such collisions.
    """
